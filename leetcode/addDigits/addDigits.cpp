class Solution {
    public:

        int addDigits(int num) {
            switch(random()%5+1){
                case 1: return addDigits01(num);
                case 2: return addDigits02(num);
                case 3: return addDigits03(num);
                case 4: return addDigits04(num);
                default: return addDigits05(num);
            }

        }

        //regualr way
        int addDigits01(int num) {
            while(num > 9) {
                int sum;
                for(sum=0; num > 0; sum += num%10 , num/=10);
                num = sum;
            }
            return num;

        }

        int addDigits02(int num) {
            while(num > 9) {
                num = num / 10 + num % 10;
            }
            return num;

        }
		nt addDigits03(int num) {
            return num >9 ? ((num %9)==0 ? 9:num%9) : num;
        }

        //But actually, we can use (num-1)%9 + 1 to make all cases right.
        int addDigits04(int num){
            return (num - 1) % 9 + 1;
        }

        //This solution is similar with pervious solution.
        int addDigits05(int num){
            return num - 9 * ((num - 1)/9);
        }

};
