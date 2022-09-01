/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

    namespace a{
        void largest(int a,int b,int c){
            if((a>b) && (a>c)){
                cout << "Largest No is ";
                cout<<a<<endl;
            }else if ((b>a) & (b>c)){
                 cout << "Largest No is ";
                cout << b<<endl;
            }else{
                 cout << "Largest No is ";
                cout << c<<endl;
            }
            // int x = a+b+c;
            // cout<<x;
        }
        
          void minimum(int a,int b,int c){
            if((a<b) && (a<c)){
                cout << "Minimum No is ";
                cout<<a<<endl;
            }else if ((b<a) & (b<c)){
                 cout << "Minimum No is ";
                cout << b<<endl;
            }else{
                 cout << "Minimum No is ";
                cout << c<<endl;
            }
            // int x = a+b+c;
            // cout<<x;
        }
        
      
        
    
        
        
    }
    
    
    namespace b{
          void add(int a,int b){
           
            int x = a+b;
              cout << "Addition otwo no is ";
            cout<<x<<endl;
        }
          void sub(int a,int b){
           
            int x = a-b;
              cout << "Substraction of two no is ";
            cout<<x<<endl;
        }  void mul(int a,int b){
           
            int x = a+b;
              cout << "Multiplication of two no is ";
            cout<<x<<endl;
        }  void divi(int a,int b){
           
            int x = a+b;
              cout << "Division of two no is ";
            cout<<x<<endl;
        }
    }
    
     namespace c{
         void sel(int t){
             
         if (t == 1){
            void cal(int a,int b){
           
            int x = r**2;
              cout << "Area of Circle ";
            cout<<x<<endl;
            
         }
         cal();
        
        }else if{
            
             void cal(int a,int b){
           
            int x = 1/2*a*b;
              cout << "Area of Triangle ";
            cout<<x<<endl;
            
            
            
        }
         cal();
         
        }  void cal(int a,int b){
           
            int x = a*b;
              cout << "Area of rectangle";
            cout<<x<<endl;
        }
         cal();
         }
    }
    
    
    
    
    
    int main(){
        int a;
        int b;
        int c;
        int d;
        
        cout << "Do you want to use calculator press 1 ";
        cin >>d;
         cout << "Enter a first Number:";
        cin>>a;
        cout << "Enter a Second Number:";
        cin>>b;
        if (d == 1){
            b:: add(a,b);
            b:: sub(a,b);
            b:: mul(a,b);
            b:: divi(a,b);
            
        }else{
            
      
       
        cout << "Enter a Third Number:";
        cin>>c;
        a::largest(a,b,c);
        a:: minimum(a,b,c);
        }
        

         return 0;
    }
   

