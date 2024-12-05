#pragma once
#include"clsRoom.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
enum enModeReservation {eAddNewReservation, Update,Emptyd

};
enum enStatusRoom{
	eReservad, eUnderFixing, eFree
};
enum enSaveResult { svFaildEmptydObjec = 0, svSucceede = 1 };

ref class clsManagementReservation
{
	
		static String^ FileName = "Reservation.txt";
		short _IDForReservation;
		String^ _In;
		short _RoomType;
		String^ _Out;
		short _IDClient;
		short _IDForRoom;
		enModeReservation _Mode;
		bool _MarkForDelete = false;
	
	
		static List<String^>^ Split(String^ Line, String^ Sperator)
		{

			List<String^>^ lWords = gcnew List<String^>();

			short pos = Line->IndexOf(Sperator);
			String^ Word = "";

			while (pos >= 0)
			{
				Word = Line->Substring(0, pos);
				if (Word->Length != 0)
				{
					lWords->Add(Word);

				}
				Line = Line->Remove(0, pos + Sperator->Length);
				pos = Line->IndexOf(Sperator);


			}
			if (Line->Length != 0)
			{
				lWords->Add(Line);
			}
			return lWords;
		}


		static String^ _ConvertDataReservationToLine(clsManagementReservation^ Reservation, String^ Sperator)
		{
			String^ Line = "";
			Line += Convert::ToString(Reservation->_IDForReservation) + Sperator;
			Line+= Convert::ToString(Reservation->_RoomType) + Sperator;
			Line += Convert::ToString(Reservation->_IDClient) + Sperator;
			Line += Convert::ToString(Reservation->_IDForRoom) + Sperator;
			Line += Reservation->_In + Sperator;
			Line += Reservation->_Out ;
		
			return Line;
		}


		static clsManagementReservation^ _ConvertLineToRecordData(String^ Line, String^ Sperator)
		{
			List<String^>^ LWords = Split(Line, Sperator);
			clsManagementReservation^ Reservation = gcnew clsManagementReservation(enModeReservation::Update, Convert::ToInt16(LWords[0]), Convert::ToInt16(LWords[1]), Convert::ToInt16(LWords[3]), Convert::ToInt16( LWords[2]), LWords[4],LWords[5]);
			return Reservation;

		}


		static List<clsManagementReservation^>^ _LoadReservationListFromFile(String^ FileName)
		{
			List<clsManagementReservation^>^ lReservation = gcnew List<clsManagementReservation^>();
			try {

				StreamReader^ MyFile = gcnew StreamReader(FileName);
				String^ Line;
				while ((Line = MyFile->ReadLine()) != nullptr)
				{
					if (Line->Length != 0)
					{
						lReservation->Add(_ConvertLineToRecordData(Line, "#//#"));
					}
				}
				MyFile->Close();
			}
			catch (Exception^ ex)
			{
				return lReservation;

			}
			return lReservation;
		}


		static void _SaveDataToFile(List<clsManagementReservation^>^ ListReservation)
		{
			try {
				StreamWriter^ MyFile = gcnew StreamWriter(FileName);
				for each (clsManagementReservation ^ C in ListReservation)
				{
					if (C->_MarkForDelete == false)
						MyFile->WriteLine(_ConvertDataReservationToLine(C, "#//#"));
				}
				MyFile->Close();
			}
			catch (Exception^ ex)
			{

			}
		}


		void _Update()
		{
			List<clsManagementReservation^>^ Cl = _LoadReservationListFromFile(FileName);
			for each (clsManagementReservation ^ C in Cl)
			{
				if (C->GetIdForReservation() == GetIdForReservation())
				{
					C->SetDateIN(GetDateIN());
					C->SetDateOut(GetDateOut());
					C->SetIDClient(GetIDClient());
					C->SetIDRoom(GetIDRoom());
					C->SetTypeRoom(GetTypeRoom());

					break;
				}
			}

			_SaveDataToFile(Cl);
		}


		void _AddDataLineToFile(String^ stDataLine)
		{
			try {
				StreamWriter^ MyFile = gcnew StreamWriter(FileName, true);
				MyFile->WriteLine(stDataLine);
				MyFile->Close();
			}
			catch (Exception^ ex)
			{

			}
		}


		void _AddReservation()
		{
			_AddDataLineToFile(_ConvertDataReservationToLine(this, "#//#"));
		}


		static clsManagementReservation^ _GetReservation(String^ Name, String^ IDCard, String^ Detail)
		{
			clsManagementReservation^ Reservation = gcnew clsManagementReservation(enModeReservation::eAddNewReservation, 0, 0, 0,-1, "", "");
			return Reservation;
		}


		static clsManagementReservation^ _GetEmptydReservation()
		{
			clsManagementReservation^ Reservation = gcnew clsManagementReservation(enModeReservation::Emptyd, 0, 0, 0,-1, "", "");
			return Reservation;
		}


public:


		clsManagementReservation(enModeReservation Mode,short IDReservation,short RoomType,  short IDRoom, short IDCLient, String^ IN, String^ Out)
		{
			_Mode = Mode;
			_IDForReservation = IDReservation;
			_IDForRoom = IDRoom;
			_RoomType = RoomType;
			_IDClient = IDCLient;
			_In = IN;
			_Out = Out;
			
		}


		static List<clsManagementReservation^>^ GetListOFReservation()
		{
			return _LoadReservationListFromFile(FileName);
		}


		void SetIDForReservation(short Reservation)
		{
			_IDForReservation = Reservation;
		}


		short GetIdForReservation()
		{
			return _IDForReservation;
		}


		void SetIDClient(short IDCard)
		{
			_IDClient = IDCard;
		}


		void SetIDRoom(short ID)
		{
			_IDForRoom = ID;
		}


		short GetIDRoom()
		{
			return _IDForRoom;
		
		}


		void SetTypeRoom(short ID)
		{
			_RoomType = ID;
		}



		short GetTypeRoom()
		{
			return _RoomType;

		}



		short GetIDClient()
		{
			return _IDClient;
		}



		void SetDateIN(String^ IN)
		{
			_In = IN;
		}


		String^ GetDateIN()
		{
			return _In;
		}

		void SetDateOut(String^ Out)
		{
			_Out = Out;
		}

		String^ GetDateOut()
		{
			return _Out;
		}
		
		static clsManagementReservation^ FindReservation(short ID)
		{
			try
			{


				StreamReader^ MyFile = gcnew StreamReader(FileName);
				String^ Line;
				while ((Line = MyFile->ReadLine()) != nullptr)
				{
					if (Line->Length != 0)
					{
						clsManagementReservation^ C = _ConvertLineToRecordData(Line, "#//#");
						if ( C->GetIdForReservation() == ID)
						{
							MyFile->Close();
							return C;
						}
					}
				}
				MyFile->Close();

			}
			catch (Exception^ ex)
			{
				return _GetEmptydReservation();
			}
			return _GetEmptydReservation();
		}

		bool IsEmptyd()
		{
			return (_Mode == enModeReservation::Emptyd);
		}

		enSaveResult Save()
		{

			switch (_Mode)
			{
			case enModeReservation::Emptyd:
			{

				return enSaveResult::svFaildEmptydObjec;
			}

			case enModeReservation::Update:
			{


				_Update();

				return enSaveResult::svSucceede;

				break;
			}
			case enModeReservation::eAddNewReservation:
			{
				if (clsManagementReservation::IsReservationExist(_IDForReservation))
				{
					return enSaveResult::svFaildEmptydObjec;
				}
				else
				{
					_AddReservation();
				clsRoom::_MakeVailableRoom(GetIDRoom());
					_Mode = enModeReservation::Update;
					return enSaveResult::svSucceede;
				}
			}


			}
		}


		static bool	IsReservationExist(short ID)

		{
			clsManagementReservation^ f = FindReservation(ID);
			return !(f->IsEmptyd());
		}


		void _MackFreeRoom(short IDRoom)
		{
			clsRoom^ Roo = clsRoom::FindRoom(IDRoom);
			if (!Roo->IsEmpty())
			{

				Roo->SetIsAvailable(true);
				Roo->Save();
			}
		}


		void _MackVailableRoom(short IDRoom)
		{
			clsRoom^ Roo = clsRoom::FindRoom(IDRoom);
			if (!Roo->IsEmpty())
			{

				Roo->SetIsAvailable(false);
				Roo->Save();
			}
		}


		bool Delete()
		{
			List<clsManagementReservation^>^ lReservation = _LoadReservationListFromFile(FileName);
			for each (clsManagementReservation ^ C in lReservation)
			{
				if (C->GetIdForReservation() == this->GetIdForReservation())
				{
					C->_MarkForDelete = true;
					clsRoom::_MakeFreeRoom(C->GetIDRoom());
					break;
				}
			}
			

			_SaveDataToFile(lReservation);
			_Mode = enModeReservation::Emptyd;
			_IDClient = 0;
			_IDForReservation = 0;
			_IDForRoom = 0;
			_In = "";
			_Out = "";
			return true;

		}

		static clsManagementReservation^ AddNewReservation()
		{
			clsManagementReservation^ Reservation = gcnew clsManagementReservation(enModeReservation::eAddNewReservation, 0, 0, 0,-1, "", "");
			return Reservation;
		}


		static List<clsManagementReservation^>^ GetReservationList()
		{
			return _LoadReservationListFromFile(FileName);
		}


	};













	




