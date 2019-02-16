#include<iostream>
#include<vector>
using namespace std;
 bool Find(int target, vector<vector<int> > array) {
        int row = array.size();
        int col = array[0].size();
        int i = row-1;
        int j = 0;
        while(i>=0 && j<col)
        {
            cout<<i<<" "<<j<<endl;
            if(array[i][j]>target)
                i--;
            else if(array[i][j]<target)
                j++;
            else if(array[i][j]==target)
                return true;
        }
        return false;
}
int main()
{
    vector<vector<int> >array(3,vector<int>(4));  //定义一个4*4的二维数组	//给数组元素赋值
    array[0][0]=1;
    array[0][1]=2;
    array[0][2]=3;
    array[0][3]=4;
    array[1][0]=2;
    array[1][1]=3;
    array[1][2]=6;
    array[1][3]=7;
    array[2][0]=3;
    array[2][1]=4;
    array[2][2]=7;
    array[2][3]=9;
    cout<<Find(1,array);
    return 0;
}

