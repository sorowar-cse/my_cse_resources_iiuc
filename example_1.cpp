//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int TC;
    cin >> TC;
    while(TC--)
    {
        int BD, DC;
        cin >> BD >> DC;
        
        //calculate one side(a), ak bahu of somobahu tribuj
        int a= BD+DC;
        
                
        //somobabahu tribujer area, when moddoma is given
        // it is: 0.5 * √3 * ak_bahur_length * ordek_vumi(BD) )* 0.5 (here, half= 0.5)
        double Ans= 0.5*sqrt(3)*a*BD*0.5;
        
        // fixed 3 ghor after decimal points by: fixed << setprecision(3) key word
        cout << fixed << setprecision(3) << Ans << endl;
    }
    return 0;
}
