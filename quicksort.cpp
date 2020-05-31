#include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
	int pivot = a[high]; 
    int i = low-1;
  
    for (int j = low; j <= high - 1; j++)  
    {  
        if (a[j] < pivot)  
        {  
            i++; 
            int t= a[i];
            a[i]=a[j];
            a[j]=t;
        }  
    }  
    int k=a[i+1];
    a[i+1]=a[high];
    a[high]=k;
    return (i + 1); 
}
void quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int pa=partition(a,l,h);
		quicksort(a,l,pa-1);
		quicksort(a,pa+1,h);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
