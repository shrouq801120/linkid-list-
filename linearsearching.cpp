#include <iostream>
using namespace std;



int linearsearching (int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{return i;
		}
	}return -1;

}

int binarysearching(int arr[],




int main()
{int arr[]={12,13,14,15};
int n=sizeof(arr)/sizeof(arr[0]);
int result =linearsearching(arr,n,15);
(result==-1)? cout<<"the key is not found":cout<<"the key is found"<<result;




	system("pause");
	return 0;
}