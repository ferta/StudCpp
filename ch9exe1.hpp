const int Len = 40;
struct golf {
    char fullname[Len];
    int handicap;
};
// No intarctive version
void setgolf(golf &g, const char *name, int hc);

//Intractive
int setgolf(golf & g);

void sethandicapt(golf &g, int hc);
void showgolf(const golf &g);
