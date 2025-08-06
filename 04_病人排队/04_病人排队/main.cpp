#include <iostream>
 typedef struct pat
{
	 unsigned int  id;
	unsigned int age;
	

}pat;
using namespace std;
int main(void)
{
	int n,oldcount=0,count=0;
	cin >> n;
	pat arr[100],old[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].id;
		cin >> arr[i].age;
		arr[i].rk = i;
		if (arr[i].age >= 60)
		{
			oldcount++;
			old[oldcount] = arr[i];
		}
		count++;
	}
	for (int i = 0; i <= oldcount-1; i++)
	{
		for (int j = 1; j <= oldcount - i; j++)
		{
			if (arr[i].age < arr[j].age)
			{
				pat t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}

	}
  
	for (int i = 0; i < count; i++)
	{
		if (arr[i].age >= 60)
		{ 
		
			for (int t = i; arr[t].id != NULL; t++)
				arr[t] = arr[t + 1];
		}
	}
	for (int i = oldcount, j = 0; i < count - oldcount; i++, ++j)
		old[i] = arr[j];
	for (int i = 0; i < count; i++)
		puts(old[i].id);
}