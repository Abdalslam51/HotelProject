#pragma once
using namespace System;
#include<cliext/vector>
#include<cliext/list>
using namespace System::Collections::Generic;
using namespace System::IO;

enum enMode { eAddNewRoo, eDeleteRoom, eShowRoom ,Empty};
enum enModeRoom {
	eAddNewRoom, enUpdate, enEmpty

};
enum	enResulat {
	eFeiledSave, eSuccessfully
};

	ref class clsRoom
	{
		static String^ FileName = "Room.txt";
		
		
		//fff
		short _RoomNumber;
		String^ _RoomStatus;
		enModeRoom _Mode;
		 bool  _IsAvailable ;
		String^ _RoomType;
		 bool  _MarckForDelete = false;
		//d
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
		static String^ _ConvertDataRoomToLine(clsRoom^ Room, String^ Sperator)
		{
			String^ Line = "";
			Line += Room->_RoomNumber.ToString() + Sperator;
			Line += Room->_RoomStatus + Sperator;
			Line += Room->_RoomType + Sperator;
			Line +=Convert::ToString( Room->_IsAvailable);
			return Line;
		}
		static clsRoom^ _ConvertLineToRecordData(String^ Line, String^ Sperator)
		{
			List<String^>^ LWords = Split(Line, Sperator);
			clsRoom^ Room = gcnew clsRoom(enModeRoom::enUpdate, Convert::ToInt16(LWords[0]), LWords[1], LWords[2], Convert::ToBoolean(LWords[3]));
			return Room;
		}
		static List<clsRoom^>^ _LoadRoomListFromFile(String^ FileName)
		{
			List<clsRoom^>^ lRoom = gcnew List<clsRoom^>();
			try {

				StreamReader^ MyFile = gcnew StreamReader(FileName);
				String^ Line;
				while ((Line = MyFile->ReadLine()) != nullptr)
				{
					if (Line->Length != 0)
					{
						lRoom->Add(_ConvertLineToRecordData(Line, "#//#"));
					}
				}
				MyFile->Close();
			}
			catch (Exception^ ex)
			{
			
				return lRoom;

			}
			return lRoom;
		}

		static void _SaveDataToFile(List<clsRoom^>^ ListRoom)
		{
			try {
				StreamWriter^ MyFile = gcnew StreamWriter(FileName);
				for each (clsRoom ^ C in ListRoom)
				{
					if (C->_MarckForDelete == false)
						MyFile->WriteLine(_ConvertDataRoomToLine(C, "#//#"));
				}
				MyFile->Close();
			}
			catch (Exception^ ex)
			{

			}
		}

		void _enUpdate()
		{
			List<clsRoom^>^ Cl = _LoadRoomListFromFile(FileName);
			for each (clsRoom ^ C in Cl)
			{
				if (C->GetIDRoom() == GetIDRoom())
				{
					
					C = this;
					
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
		void _AddRoom()
		{
			_AddDataLineToFile(_ConvertDataRoomToLine(this, "#//#"));
		}
		static clsRoom^ _GetRoom(String^ Name, String^ IDCard, String^ Detail)
		{
			clsRoom^ Room = gcnew clsRoom(enModeRoom::eAddNewRoom, 0, "", "", true);
			return Room;
		}
		static clsRoom^ _GetenEmptyRoom()
		{
			clsRoom^ Room = gcnew clsRoom(enModeRoom::enEmpty, 0, "", "", false);
			return Room;
		}
	public:
		clsRoom(enModeRoom Mode, short RoomNumber, String^ RoomStatus, String^ RoomType,  bool IsAvailable)
		{
			_Mode = Mode;
			_RoomNumber = RoomNumber;
			_RoomStatus = RoomStatus;
			_RoomType = RoomType;
			_IsAvailable = IsAvailable;
		}
		static List<clsRoom^>^ GetListOFRoom()
		{
			return _LoadRoomListFromFile(FileName);
		}
		void SetIDRoom(short Room)
		{
			_RoomNumber = Room;
		}
		short GetIDRoom()
		{
			return _RoomNumber;
		}
		void SetIsAvailable( bool IsAvailable)
		{
			_IsAvailable = IsAvailable;
		}
		 bool GetIsAvailable()
		{
			return	_IsAvailable;
		}
		
		void SetTypeRoom(String^ Type)
		{
			_RoomType = Type;
		}
		String^ GetTypeRoom()
		{
			return _RoomType;

		}
		void SetRoomStatus(String ^RoomStatus)
		{
			_RoomStatus = RoomStatus;
		}
		String^ GetRoomStatus()
		{
			return _RoomStatus;
		}


		

		static clsRoom^ FindRoom(short ID)
		{
			try
			{


				StreamReader^ MyFile = gcnew StreamReader(FileName);
				String^ Line;
				while ((Line = MyFile->ReadLine()) != nullptr)
				{
					if (Line->Length != 0)
					{
						clsRoom^ C = _ConvertLineToRecordData(Line, "#//#");
						if (C->GetIDRoom() == ID)
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
				return _GetenEmptyRoom();
			}
			return _GetenEmptyRoom();
		}

		 bool  IsEmpty()
		{
			return (_Mode == enModeRoom::enEmpty);
		}

		enResulat Save()
		{

			switch (_Mode)
			{
			case enModeRoom::enEmpty:
			{

				return enResulat::eFeiledSave;
			}

			case enModeRoom::enUpdate:
			{


				_enUpdate();

				return enResulat::eSuccessfully;

				break;
			}
			case enModeRoom::eAddNewRoom:
			{
				if (clsRoom::IsRoomExist(_RoomNumber))
				{
					return enResulat::eFeiledSave;
				}
				else
				{
					_AddRoom();
					_Mode = enModeRoom::enUpdate;
					return enResulat::eSuccessfully;
				}
			}


			}
		}
		static  bool 	IsRoomExist(short ID)

		{
			clsRoom^ f = FindRoom(ID);
			return !(f->IsEmpty());
		}
		 bool  Delete()
		{
			List<clsRoom^>^ lRoom = _LoadRoomListFromFile(FileName);
			for each (clsRoom ^ C in lRoom)
			{
				if (C->GetIDRoom() == this->GetIDRoom())
				{
					C->_MarckForDelete = true;
					break;
				}
			}

			_SaveDataToFile(lRoom);
			_Mode = enModeRoom::enEmpty;
			_IsAvailable = false;
			_RoomNumber = 0;
			_RoomStatus = "";
			_RoomType = "";
			
			return true;

		}
		 static void _MakeFreeRoom(short IDRoom)
		 {
			 List<clsRoom^>^ listRoom = clsRoom::GetListOFRoom();
			 for each (clsRoom ^ Room in listRoom)
			 {

				 if (Room->GetIDRoom() == IDRoom)
				 {
					 Room->SetIsAvailable(true);
					 break;
				 }
			 }
			 _SaveDataToFile(listRoom);

		 }
		 static void _MakeVailableRoom(short IDRoom)
		 {
			 List<clsRoom^>^ listRoom = clsRoom::GetListOFRoom();
			 for each (clsRoom ^ Room in listRoom)
			 {

				 if (Room->GetIDRoom() == IDRoom)
				 {
					 Room->SetIsAvailable(false);
					 break;
				 }
			 }
			 _SaveDataToFile(listRoom);

		 }
		static clsRoom^ AddNewRoom()
		{
			clsRoom^ Room = gcnew clsRoom(enModeRoom::eAddNewRoom, 0, "", "", true);
			return Room;
		}
		static List<clsRoom^>^ GetRoomList()
		{
			return _LoadRoomListFromFile(FileName);
		}
	};
