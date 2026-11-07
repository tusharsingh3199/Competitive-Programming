class Solution {
public:
    int divide(int dividend, int divisor) {
        int max = pow(2, 31) - 1;
        int min = pow(2, 31) * -1;
        int q = 0, sign=1;
        long long int divid = dividend;
        long long int div = divisor;

        if (divid == min && divisor == -1) return max;
        if (div == 1) return divid;
        if (div == -1) { return -divid; }

        if (divid < 0) { sign *= -1; divid *= -1; }
        if (div < 0)  { sign *= -1; div *= -1;  }
        while(divid >= div){
            divid -= div;
            q++;
        }
        q *= sign;
        if (q > max || divisor == 0) return max;
        if (q < min || divisor == 0) return min;
        return q;
        
    }
};
