//Abstraction:- It is a process of hiding unneccesary details from the user and only show the necessary information to the user.

//In abstraction we will show only nesessary information to the user.

//abst through header file:-
#include<iostream>
#include<math.h>

using namespace std;

//main()
//{
//	cout<<pow(2,5);
//	cout<<"\n"<<sqrt(64);
//	cout<<"\n"<<sin(78);
//	cout<<"\n"<<cos(65);
//	cout<<"\n"<<tan(54);
//	cout<<"\n"<<log(30);
//	cout<<"\n"<<ceil(78.67);
//	cout<<"\n"<<floor(80.76);
// } 
 
// abst through class:-
 
 class sum
 {
 	private:
 		int x,y,z;  //private data member
 		public:
 			void add()
 			{
 				cout<<"Enter the two number:";
 				cin>>x>>y;
 				z=x+y;
 				cout<<z;
			 }
		};
			 main()
			 {
			 	sum s;
			 	s.add();
			 }
			 
 
 
