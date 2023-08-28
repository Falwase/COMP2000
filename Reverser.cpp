
#include <string>

class Reverser
{

public:
    
    int reverseDigit(int value) {

        static int sum,r;
        
        if(value){
            r=value%10;
            sum=sum*10+r;
            reverseDigit(value/10);
        }
        else{
            return 0;
        }
        
        return sum;
    }

    std::string reverseString(std::string characters) {
        
        if(characters.size() == 0) {
            return characters;
        }

        return reverseString(characters.substr(1)) + characters[0];
    }

};


