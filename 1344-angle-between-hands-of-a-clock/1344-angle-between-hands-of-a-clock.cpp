class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12)
        hour=0;
        double Min=6*minutes;
        double Ho=30*hour+0.5*minutes;
        double a=abs(Ho-Min);
        return min(a,360-a);
    }
};