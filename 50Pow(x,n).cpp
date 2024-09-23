// Binary Exponentiation
// n(decimal number) => Its Binary Form has Max Logbase2(n)+1 digits
// Let n =8 So its Binary form is 1000
// It has Logbase2(8)+1 = 3+1 = 4 Digits

class Solution {
public:
    double myPow(double x, int n) {
        
        long binForm=n;
        if(n<0){           // if n is negative n to pwer -x is converted into 1/n to power x
            x=1/x;
            binForm=-binForm;
        }

        double ans=1;

        while(binForm>0) {
            if(binForm%2==1){
                ans*=x;
            }
            x*=x;
            binForm /= 2;
        }
        return ans;
    }
};
