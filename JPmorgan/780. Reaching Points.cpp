//easy maths dont penic reverse mode is applied
class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        while(tx>sx && ty>sy){
            if(tx>ty){
                tx=tx%ty;
            }
            else{
                ty=ty%tx;
            }
        }
        if(tx==sx && ty>=sy){
            return (ty-sy)%tx==0;
        }
        else if(sy==ty && tx>=sx){
            return (tx-sx)%ty==0;
        }
        return false;
    }
};
