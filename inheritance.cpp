#include <iostream>
using namespace std;

class parent 
{
    private:
        int Priv_var_parent;
        void Priv_fun_parent()
        {
            Priv_var_parent=100;
            cout <<"private function of parent:"<<Priv_var_parent <<endl;
        }
    protected:
        int Prot_var_parent;
        void Prot_fun_parent(){
            Prot_var_parent=200;
            cout <<"protected function of parent:"<<Prot_var_parent <<endl;
        }
    public:
        int Publ_var_parent;
        void Publ_fun_parent()
        {
            Publ_var_parent=300;
            cout <<"public function of parent:"<<Publ_var_parent <<endl;
            Priv_fun_parent(); //these cannot be called directly from main class so have to be called through public function
        }
};
class child : public parent
{
    private:
        int Priv_var_child;
        void Priv_fun_child()
        {
            Priv_var_child=400;
            cout <<"private function of child:"<<Priv_var_child<<endl;
        }
    protected:
        int Prot_var_child;
        void Prot_fun_child()
        {
            Prot_var_child=500;
            cout <<"protected function of child:"<<Prot_var_child<<endl;
        }
    public:
        int Publ_var_child;
        void Publ_fun_child()
        {
            Publ_var_child=600;
            cout <<"public function of child:"<<Publ_var_child<<endl;
            Publ_fun_parent();
            Prot_fun_parent();
            Priv_fun_child();
            Prot_fun_child();
        }
};
int main(){
    child obj_child;
    obj_child.Publ_fun_child();
}