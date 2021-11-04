#include<iostream>

using namespace std;

//int main(){
	
//	int a=10;
//	int *ptr;
//	ptr=&a;
//	
//	cout<<&a<<endl;
//	cout<<ptr<<endl;
//	cout<<*ptr<<endl;
		/* Pointer Arithematics*/
//	int a=10;
//	int *ptr=&a;
//	cout<<ptr<<endl;
//	ptr++;
//	cout<<ptr<<endl;

		/* Pointers & Arrays*/
		
//	int arr[]={10,20.30,40};
//		cout<<*arr<<endl;
//		
//		int *ptr=arr;
//		for(int i=0; i<3; i++)
//		{
////			cout<<ptr<<endl;
////			ptr++;
//			cout<<*(arr+i)<<endl;		}
		
		/* Pointer to Pointer*/
//		int a=10;
//		int *p;
//		p=&a;
//		
//		cout<<*p<<endl;
//		int **q=&p;
//		cout<<*q<<endl;
//		cout<<**q<<endl;
	
				
//	return 0;
//}

		/* Passing pointers to function*/
//		void increment(int a){
//		a++;
//		}
//		int main()
//		{
//			int a=2;
//			increment(a);
//			
//			cout<<a<<endl;
//			return 0;
//		}
		void swap(int *a, int *b){
			int temp=*a;
			*a=*b;
			*b=temp;
		}		
		
		int main(){
			
			int a=2;
			int b=4;
			int *aptr=&a;
			int *bptr=&b;
//			swap(aptr,bptr);
			swap(&a,&b);
			cout<<a<<" "<<b<<endl;
			
			return 0;
		}
		
		
		
		
		
			
