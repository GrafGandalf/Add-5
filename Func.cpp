#include "Func.hpp"

namespace Masiv
{

    int* FunInput(int &a, int Mess[10000])
        {
            int b=0;
            std::ifstream
            file("/Users/enil/Desktop/AddGotov/Add-4/input.txt");
            
            file >> b;
            
            for (int i=0; i<b; i++)
            {
                file >> Mess[i];
            }
            a=b;
            
            file.close();

            return Mess;
        }
    

    void FunOutput(int a, int Mass[])
    {
        std::ofstream file("/Users/enil/Desktop/AddGotov/Add-4/output.txt", std::ios::out);
        
        for (int i=0; i<a; i++)
        {
            file << Mass[i] << " ";
        }
        
        
        
        file.close();
    }

    bool Prost(int a)
    {
        int count=0;
        for (int i = 2; i <= sqrt(a); i++) {
            if (a % i == 0)
            {
                count++;
            }
        }
        if (count==0) return true;
        else return false;
            
    }

    bool P15(int a)
    {
        int sum=0;
        while (a!=0)
            {
                sum += a%10;
                a /= 10;
            }
        if (sum==15) return true;
        else return false;
    }

    int* FunSort(int &a, int Mess[10000])
    {
        int in=0; int ou=0;
        
        for (int i=0; i<a; i++)
        {
            if (Prost(Mess[i])==true)
            {
                Mess[i]=-2147483647;
                in++;
            }
        }
        
        for (int i=0; i<a; i++)
        {
            if (Mess[i]==-2147483647)
            {
               
                for (int j=i; j<a-1; j++)
                {
                    Mess[j]=Mess[j+1];
                }
                if (Mess[i]==-2147483647) i--;
            }
        }
        
        a-=in; // Удаление чисел
        
        
        for (int i=0; i<a; i++)
        {
            if ((Prost(Mess[i])==false)&&(P15(Mess[i])==true))
            {
                ou++;
                for (int j=a-1; j>=i; j--)
                {
                    Mess[j+1]=Mess[j];
                }
                i++;
            }
        }
        
        a+=ou; //Дублирование
        
        
        return Mess;
    }

    

}
