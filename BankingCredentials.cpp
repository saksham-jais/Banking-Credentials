#include <iostream>
using namespace std;
class BankCredentials{
        private :
            string password;
        public :
            string id;
        void getdtls(string id,string pswrd);
        void check(){
            string Pswrd[]={"Enter Already Saved Passwords"};
            // cout<<password;
            int ik=0;
            for(int i=0;i<=(end(Pswrd)-begin(Pswrd));i++){
                if (password==Pswrd[i]){
                    cout<<"Matched";
                    ik++;
                }
            }
            if (ik==0){cout<<"Not Matched";}

        };
    };
void BankCredentials :: getdtls(string a1, string b1){
    password = b1;
    id = a1;

}
int main(){
    BankCredentials Harry;
    string idd;
    string psd;
    cout<<"Enter USER ID : ";
    cin>>idd;
    cout<<"Enter Password : ";
    cin>>psd;
    Harry.getdtls(idd,psd);
    Harry.check();
    return 0;
}