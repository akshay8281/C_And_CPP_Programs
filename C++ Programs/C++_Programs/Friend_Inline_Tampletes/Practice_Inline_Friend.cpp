
//Practice Inline Functons

//#include <iostream>
//using namespace std;

//01
//inline rectangle (int z)
//{
//	int result;
//	result = z+z+z;
//}
//
//
//int main ()
//{
//	int z = 50;
//	cout<<rectangle(z);
//}

//inline cube (int length, int bredth)
//{
//	int result;
//	result = length * bredth;
//}
//
//int main ()
//{
//	int length = 5;
//	int bredth = 10;
//	
//	cout<<cube (length,bredth);
//}


///////Practice for Friend Function

//#include <iostream>
//using namespace std;
//
//class Night
//{
//	private :
//		int Manager,Receptionist;
//			
//   public :
//   	friend void HotelFun ();
//};
//
//void HotelFun()
//{
//	Night Service;
//	Service.Manager = 225000;
//	Service.Receptionist = 200000;
//	
//	cout<<"\nThe Salaray of Night Manager is : RS  "<<Service.Manager<<endl;
//	cout<<"\nThe Salaray of Receptionist is : RS  "<<Service.Receptionist<<endl;
//}
//
//int main ()
//{
//	HotelFun();
//}


// Templete Practice

//#include <iostream>
//using namespace std;
//
//template <class Temp>
//void swapping (Temp &a, Temp &b)
//{
//	Temp Timepass;
//	
//	Timepass = a;
//	a = b;
//	b = Timepass;
//}
//
//int main ()
//{
//	string a = "MyLove", b = "YourLove";
//	int x = 2500 , z = 8000;
//	
//	cout<<"Before Swapping of Variable"<<"\na = "<<a<<"\nb = "<<b<<endl<<endl;
//	swapping(a,b);
//	
//	cout<<"After Swapping of Variable"<<"\na = "<<a<<"\nb = "<<b<<endl<<endl<<endl;
//	
//	
//	cout<<"Before Swapping of Variable"<<"\nX = "<<x<<"\nZ = "<<z<<endl<<endl;
//	swapping(x,z);
//	cout<<"Before Swapping of Variable"<<"\nX = "<<x<<"\nZ = "<<z<<endl;
//
//}

