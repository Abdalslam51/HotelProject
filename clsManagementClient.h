#pragma once
//#include<cliext/list>
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
//using namespace cliext;
//using namespace cliext::impl;
enum  enModeClient
{
 eEmpty=0,
 eAddNew=1,
 eUpdate=2

};
enum enSaveResults { svFaildEmptyObject = 0, svSucceeded = 1 };
ref class clsManagementClient
{
	static String^ FileNames = "Client.txt";

	String^ _Name;
	String^ _Nationality;
	String^ _Profession;
	short _IDCard;
	String^ _Detail;
	enModeClient _Mode;
	bool MarkForDelete = false;


	static List<String^>^ Split(String^ Line, String^ Sperator)// ﬁ”Ì„ «·”ÿ— 
	{
		
		List<String^>^ lWords= gcnew List<String^>();//ﬁ«∆„…
		
		short pos= Line->IndexOf(Sperator);
		String^ Word = "";
		
		while (pos>=0)
		{
			Word = Line->Substring(0, pos);// «Œ– „Ã„Ê⁄… „‰ «·Õ—Ê› 
			if (Word->Length != 0)
			{
				lWords->Add(Word);

			}
			Line = Line->Remove(0, pos + Sperator->Length);// “Ì·
			pos = Line->IndexOf(Sperator);


		}
		if (Line->Length != 0)
		{
			lWords->Add(Line);
		}
		return lWords;
	}
	
	
	static String^ _ConvertDataClientToLine(clsManagementClient^ Client, String^ Sperator)// ÕÊÌ· «·„⁄·Ê„«  «·Ï ”ÿ—
	{
		String^ Line = "";
		Line += Convert::ToString(Client->_IDCard) + Sperator;
		Line += Client->_Name + Sperator;
		Line += Client->_Detail+Sperator;
		Line += Client->_Nationality + Sperator;
		Line += Client->_Profession;
		return Line;
	}
	
	
	
	static clsManagementClient^ _ConvertLineToRecordData(String^ Line,String ^Sperator)// ÕÊÌ· «·”ÿ— «·Ï „⁄·Ê„« 
	{
		List<String^>^ LWords = Split(Line, Sperator);
		clsManagementClient^ client=gcnew clsManagementClient(enModeClient::eUpdate,LWords[1],Convert::ToInt16( LWords[0]),LWords[2],LWords[3],LWords[4]);
		return client;
	
	}
	
	
	
	static List<clsManagementClient^>^_LoadClientListFromFile(String^ FileName)
	{
		List<clsManagementClient^>^ lClient=gcnew List<clsManagementClient^>();
		try {
			
			StreamReader^ MyFile = gcnew StreamReader(FileName);
			String^ Line;
			while ((Line = MyFile->ReadLine()) != nullptr)
			{
				if (Line->Length != 0)
				{
					lClient->Add(_ConvertLineToRecordData(Line, "#//#"));//Â–Â «·”ÿ— ·Õ›Ÿ „⁄·Ê„«  ﬂ«∆‰ »⁄œ  ÕÊÌ·Â „‰ ·«Ì‰ 
				}
			}
			MyFile->Close();
		}
		catch (Exception^ ex)
		{
			
			return lClient;
         
		}
		return lClient;
	}

	static void _SaveDataToFile(List<clsManagementClient^>^ ListClient)//·Õ›Ÿ «·„⁄·Ê„«  
	{
		
		try {
			StreamWriter^ MyFile = gcnew StreamWriter(FileNames);
			for each (clsManagementClient ^ C in ListClient)
			{
				if (C->MarkForDelete == false)
				{
					MyFile->WriteLine(_ConvertDataClientToLine(C, "#//#"));
				}
			}
			MyFile->Close();
		}
		catch (Exception^ ex)
		{

		}
	}

	void _Update()// ⁄œÌ·
	{
		List<clsManagementClient^>^ Cl = _LoadClientListFromFile(FileNames);
		for each (clsManagementClient ^ C in Cl)
		{
			if (C->GetIDCard()== this->GetIDCard())
			{
				C->SetName(this->GetName());
				C->SetDetail(this->GetDetail());
				C->SetNationality(this->GetNationality());
				C->SetProfession(this->GetProfession());

				break;
			}
		}

		_SaveDataToFile(Cl);//Õ›Ÿ «·„⁄·Ê„«  «·Ï „·›
	}


	void _AddDataLineToFile(String  ^stDataLine)//«÷«›… «·”ÿ— «·Ï „·›
	{
		try {
			StreamWriter^ MyFile = gcnew StreamWriter(FileNames, true);
			MyFile->WriteLine(stDataLine);//ﬂ «»… ”ÿ—
			MyFile->Close();//«€·«ﬁ «·»—‰«„Ã
		}
		catch (Exception^ ex)//„⁄«·Ã… «·Œÿ«¡
		{

		}
	}
	
	
	void _AddClient()
	{
		_AddDataLineToFile(_ConvertDataClientToLine(this, "#//#"));//«÷«›… «·ﬂ«∆‰ »⁄œ  ÕÊÌ·Â «·Ï ”ÿ— 
	}


	static clsManagementClient^ _GetClient(String^ Name, String^ IDCard, String^ Detail)
	{
		clsManagementClient^ client = gcnew clsManagementClient(enModeClient::eAddNew, "", 0, "","","");
		return client;
	}
	

	static clsManagementClient^ _GetEmptyClient()
	{
		clsManagementClient^ client = gcnew clsManagementClient(enModeClient::eEmpty, "", 0, "","","");
		return client;
	}


public:



	clsManagementClient(enModeClient Mode, String^ Name, short IDCard, String^ Detail,String^Nationality, String^ Profession)
	{
		_Mode = Mode;
		_Name = Name;
		_IDCard = IDCard;
		_Profession = Profession;
		_Nationality = Nationality;
		_Detail = Detail;
		
	}



	static List<clsManagementClient^>^ GetListOFClient()
	{
		return _LoadClientListFromFile(FileNames);
	}



	void SetName(String^ Name)
	{
		_Name = Name;
	}



	String^ GetName()
	{
		return _Name;
	}



	void SetIDCard(short IDCard)
	{
		_IDCard = IDCard;
	}



	short GetIDCard()
	{
		return _IDCard;
	}



	void SetDetail(String^ Detail)
	{
		_Detail = Detail;
	}



	String^ GetDetail()
	{
		return _Detail;
	}



	void SetProfession(String ^Profession)
	{
		_Profession = Profession;
	}



	String^ GetProfession()
	{
		return _Profession;
	}



	void SetNationality(String^ Nationality)
	{
		_Nationality = Nationality;
	}



	String^ GetNationality()
	{
		return _Nationality;
	}




	static clsManagementClient^ FindClient(short ID)
	{
		if (ID > 0)
		{try
		{


			StreamReader^ MyFile = gcnew StreamReader(FileNames);
			String^ Line;
			while ((Line = MyFile->ReadLine()) != nullptr)
			{
				if (Line->Length != 0)
				{
					clsManagementClient^ C = _ConvertLineToRecordData(Line, "#//#");
					if (C->GetIDCard() == ID)
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
			return _GetEmptyClient();
		}
	}
		return _GetEmptyClient();
	}


	  bool IsEmpty()
	{
		return (_Mode==enModeClient::eEmpty);
	}


	  enSaveResults Save()
	  {

		  switch (_Mode)
		  {
		  case enModeClient::eEmpty:
		  {

			  return enSaveResults::svFaildEmptyObject;
		  }

		  case enModeClient::eUpdate:
		  {


			  _Update();

			  return enSaveResults::svSucceeded;

			  break;
		  }
		  case enModeClient::eAddNew:
		  {
			  if (clsManagementClient::IsClientExist(_IDCard))
			  {
				  return enSaveResults::svFaildEmptyObject;
			  }
			  else
			  {
				  _AddClient();
				  _Mode = enModeClient::eUpdate;
				  return enSaveResults::svSucceeded;
			  }
		  }


		  }
	  }


  static bool	IsClientExist(short ID)
		{
	  clsManagementClient^ f = FindClient(ID);
	  return !(f->IsEmpty());
		}


  bool Delete()
  {
	  List<clsManagementClient^>^ lClient = _LoadClientListFromFile(FileNames);
	  for each (clsManagementClient ^ C in lClient)
	  {
		  if (C->GetIDCard() == GetIDCard())
		  {
			  C->MarkForDelete = true;
			  break;
		  }
	  }

	  _SaveDataToFile(lClient);
	  _Mode = enModeClient::eEmpty;
	  _Name = "";
	  _IDCard = 0;
	  _Detail = "";
	  return true;

  }



  static clsManagementClient^ AddNewClient()
  {
	  clsManagementClient^ client = gcnew clsManagementClient(enModeClient::eAddNew, "", 0, "","","");
	  return client;
  }




  static List<clsManagementClient^>^ GetClientList()
  {
	  return _LoadClientListFromFile(FileNames);
  }
};


