#include <iostream>
using namespace std;
void replaceSpace(char *str,int length) {
    if(str==NULL||length==0)
        return;
    int i = 0;
    int numofspace = 0;
    int oldlength = 0;
    while(str[i]!='\0')
    {
        oldlength++;
        if(str[i]==' ')
            numofspace++;
        i++;
    }
    int newlength = oldlength+2*numofspace;
    if(newlength<length)
        return;
    int j = newlength;
    int k = oldlength;
    while(j>=0)
    {
        if(str[k]==' ')
        {
            str[j--]='0';
            str[j--]='2';
            str[j--]='%';
        }
        else
        {
            str[j--]=str[k];
        }
        k--;
    }
}

/*void replaceSpace1(char *str,int length) {

        int count=0;
        for(int i=0;i<length;i++){
            if(str[i]==' ')
                count++;
        }
        for(int i=length-1;i>=0;i--){
            if(str[i]!=' '){
                str[i+2*count]=str[i];
            }
            else{
                count--;
                str[i+2*count]='%';
                str[i+2*count+1]='2';
                str[i+2*count+2]='0';
            }
        }
}*/


int main()
{
    char a[] =" a  b c d ";
    replaceSpace(a,15);
    cout<<a;
    return 0;
}
