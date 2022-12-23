#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    float c;

    scanf("%d %d", &x, &y);

    c = y - x;
    c = y / c;

    printf("%.f\n", ceil(c));
}
// some function:
// round() = .1 theke .4 porjonto kono value change korbe na kintu .5 theke .9 er moddhe hole nxt integer e jbe.
// trunc() = kono akta number theke tar floating part tuku soriye dibe
// ceil() = uporer dike nxt integer e jabe
// floor() = nicher dike integer e jbe