#include <iostream>

using namespace std;

void Ex1();

int f(size_t i)
{
    printf("%d\n", i);
    return 1;
}

void Ex3()
{
    char* str;

    char* obr;

    size_t* pi = 0;

    int (*f)(size_t);

    pi[0] = 0;     

    size_t l;   

    for (l = 1; obr[l]; ++l)
    {
        size_t j = pi[l - 1];
        while ((j > 0) && (obr[l] != obr[j])) 
            j = pi[j - 1];	        
        if (obr[l] == obr[j])    
            ++j;
        pi[l] = j;
    }
    size_t j = 0; 

    for (size_t i = 0; str[i]; ++i)
    {
        while ((j > 0) && (str[i] != obr[j]))
            
            j = pi[j - 1];

        if (str[i] == obr[j]) 
            ++j;             
        if (j == l)
            if (!f(i - l + 1))
                return;
                
    }
}

int main()
{
   //Ex1();

    Ex3();

}

/*
void Ex1 ()
{
    int arr[9]; 

    cout << "Press 10 numbers for arr: " << endl;

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i]; 
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int b = arr[j];

                arr[j] = arr[j + 1]; 

                arr[j + 1] = b; 
            }
        }
    }

    cout << "True arr: ";

    for (int i = 0; i < 9; i++) 
    {
        cout << arr[i] << " "; 
    }
}
*/



