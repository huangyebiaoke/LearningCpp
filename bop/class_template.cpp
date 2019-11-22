#include <iostream>
using namespace std;
// abstract: class_template>class>obj;
template<class numType>
class Compare{
    public:
        Compare(numType a,numType b):x(a),y(b){}
        numType max(){
            return (x>y)?x:y;
        }
        numType min(){
            return (x<y)?x:y;
        }
    private:
        numType x,y;
};
// template<class numType>
// numType Compare<numType>::max(){
//     return (x>y)?x:y;
// }

int main(int argc, char const *argv[]){
    Compare<int> cmpI(3,4);
    cout<<"cmpI.max="<<cmpI.max()<<endl;
    Compare<float> cmpF(3.4,4.3);
    cout<<"cmpF.max="<<cmpF.max()<<endl;
    Compare<char> cmpC('A','a');
    cout<<"cmpC.max="<<cmpC.max()<<endl;
    return 0;
}
