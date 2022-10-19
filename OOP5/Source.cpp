//#include<iostream>
//#include<conio.h>
////MyString
////1)1 ci xarakter qaytaran method + 
////2)sonuncu xarakter qaytaran method  + 
////3) Append(const char* text)   + 
////4) s.rfind('a') 
////5)s.find('w')//6 xarakterin indexi qayitsin
////6)s.clear()//string silinsin delete edin + 
//
//
//
//
//
//
//using namespace std;
//
//
//class MyString {
//
//	char* st;
//
//public:
//	MyString() = default;
//
//	MyString(const char* st) {
//		SetSt(st);
//	}
//
//	void SetSt(const char* st) {
//		int l = strlen(st);
//		this->st = new char[l + 1] {};
//		strcpy_s(this->st, l + 1, st);
//	}
//
//	char* GetString()  const
//	{ 
//		return st;
//	}
//
//
//	char GetFirstCharacter() const  
//	{
//		return st[0];
//	}
//
//
//	char GetLastCharacter() const 
//	{
//		return st[strlen(st) - 1];
//	}
//
//
//	char* GetText()const {
//		return st;
//	}
//
//	void Append(const char* newtext) {
//		int newlen = strlen(newtext) + 10;
//		if (newtext!=nullptr && (newlen)>0)
//		{
//			size_t new_length = strlen(st) + (newlen);
//			char* new_data = new char[new_length + 1] {};
//			strcat_s(new_data, strlen(st) + 1, st);
//			strcat_s(new_data, newlen + 1, newtext);
//			delete[]this->st;
//			this->st = new_data;
//			new_data = nullptr;
//		}
//		else
//		{
//			cout << "New text's size must be greater than 0 " << endl;
//		}
//
//	}
//
//
//	void Swap(char& a, char& b) {
//		char temp = a;
//		a = b;
//		b = temp;
//	}
//	bool IsReverse(bool reverse, char& a, char& b) {
//		if (reverse) return a < b;
//		return a > b;
//	}
//	
//	    void FindReverse(const char* str) {
//        for (size_t i = strlen(st); i > 0; i--)
//        {
//            if (str[i] == 'a') {
//                cout << "Index : " << i << "  a" << endl;
//            }
//        }
//    }
//		    void Find(const char*str) {
//        for (size_t i = 0; i < strlen(st); i++)
//        {
//            if (str[i] == 'c') {
//                cout << "Index  of  " <<  "'c' is " <<i << endl;
//            }
//        }
//    }
//
//
//
//     void  Delete() {
//		delete[]st;
//		st = nullptr;
//	
//		
//        }
//
//	~MyString() {
//		delete[]st;
//	
//	}
//
//
//};
//
//
//void main() {
//	cout << "My String is : ";
//	MyString st=("Elchin");
//	
//	cout << st.GetText() << endl;
//	
//	cout<<"First character of MyString : "<<st.GetFirstCharacter() << endl; // Print First character
//
//
//	cout<< "Last character of MyString : "<<st.GetLastCharacter()<<endl; 	// Print Last character
//
//
//	cout << "Append new word to MyString : " ; //Appending new text 
//	st.Append(" Guliyev  ") ;
//	cout << st.GetText() << endl;
//	
//	cout << "Finding letter 'c' in MyString : "; //finding given letter with index
//    st.Find("Elchin"); 
//
//
//	cout << "Delete MyString : " << endl; //Deleting MyString
//	st.Delete();
//
//
//
//
//
//
//}










/*1. IntArray class-i yaradin.
Bu class massiv rolunuoynamalidir.Novbeti imkanlar olsun:-
Massivin evveline reqem elave eden method-
Massivin sonuna reqem elave eden method-
Massivi copy etmek imkani yaradin-
Print*/



//
//class IntArray {
//public:
//    int* arr;
//    int size;
//    IntArray() {
//        arr = nullptr;
//        size = 0;
//    }
//    void addElementToEnd(int elem) {
//        int* temp = new int[size + 1];
//        for (int i = 0; i < size; i++) {
//            temp[i] = arr[i];
//        }
//        temp[size] = elem;
//        delete[] arr;
//        arr = temp;
//        temp = nullptr;
//        size++;
//    }
//
//    void addElementToStart(int elem) {
//        int* temp = new int[size + 1];
//        temp[0] = elem;
//        for (int i = 0; i < size; i++) {
//            temp[i + 1] = arr[i];
//        }
//        temp[size] = elem;
//        delete[] arr;
//        arr = temp;
//        temp = nullptr;
//        size++;
//    }
//    void CopyArray(int* newArr) {
//        int *newwArr= new int [size];
//        for (size_t i = 0; i < size; i++)
//        {
//            newArr[i] = arr[i];
//        }
//        
//    }
//
//    void print() {
//        for (int i = 0; i < size; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//    ~IntArray() { delete[] arr; }
//};
//void main() {
//    IntArray arr;
//    cout << "Array : " << endl;
//    arr.addElementToEnd(1);
//    arr.addElementToEnd(2);
//    arr.addElementToEnd(3);
//    arr.addElementToEnd(4);
//    arr.addElementToEnd(5);
//    arr.print();
//    cout << "Add element to the end of array : " << endl;
//    arr.addElementToEnd(6);
//    arr.print();
//    cout << "Add element to the beginning of array : " << endl;
//    arr.addElementToStart(7);
//    arr.print();
//    cout << "Copy Array : "  << endl;
//    arr.print();
//  
//
//}