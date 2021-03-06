#include <iostream>
using namespace std;

int N, r, c;
int x, y, ans;

void Z(int x, int y,int n) {
    cout<< "("<<x<<","<<y<<","<<n<<")"<<'\n';
    if (x == r && y == c) {
        cout << ans << "\n";
        return;
    }


    if (r < x + n && r >= x && c < y + n && c >= y) 
    {
        Z(x, y, n / 2);

        Z(x, y + n / 2, n / 2);
        Z(x + n / 2, y, n / 2);
        Z(x + n / 2, y + n / 2, n / 2);
    }
    // (r,c)가 현재 사분면이 아니면 그냥 사분면의 크기만큼 더해준다 (탐색한걸로 친다)
    else{
        cout << "ans: "<<ans<<'\n';
        ans += n* n;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> r >> c;

    Z(0, 0, (1 << N));

    return 0;
}