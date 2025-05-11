#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);

    int isvalid_a = 0, isvalid_b = 0, isvalid_c = 0;
    int isvalid_d = 0, isvalid_e = 0, isvalid_f = 0;
    int isvalid_g = 0, isvalid_h = 0, isvalid_i = 0;
    int isvalid_j = 0, isvalid_k = 0, isvalid_l = 0;
    int isvalid_m = 0, isvalid_n = 0, isvalid_o = 0;
    int isvalid_p = 0, isvalid_q = 0, isvalid_r = 0;
    int isvalid_s = 0, isvalid_T = 0, isvalid_u = 0;
    int isvalid_v = 0, isvalid_w = 0, isvalid_x = 0;
    int isvalid_y = 0, isvalid_z = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            isvalid_a = 1;
        } else if (str[i] == 'b' || str[i] == 'B') {
            isvalid_b = 1;
        } else if (str[i] == 'c' || str[i] == 'C') {
            isvalid_c = 1;
        } else if (str[i] == 'd' || str[i] == 'D') {
            isvalid_d = 1;
        } else if (str[i] == 'e' || str[i] == 'E') {
            isvalid_e = 1;
        } else if (str[i] == 'f' || str[i] == 'F') {
            isvalid_f = 1;
        } else if (str[i] == 'g' || str[i] == 'G') {
            isvalid_g = 1;
        } else if (str[i] == 'h' || str[i] == 'H') {
            isvalid_h = 1;
        } else if (str[i] == 'i' || str[i] == 'I') {
            isvalid_i = 1;
        } else if (str[i] == 'j' || str[i] == 'J') {
            isvalid_j = 1;
        } else if (str[i] == 'k' || str[i] == 'K') {
            isvalid_k = 1;
        } else if (str[i] == 'l' || str[i] == 'L') {
            isvalid_l = 1;
        } else if (str[i] == 'm' || str[i] == 'M') {
            isvalid_m = 1;
        } else if (str[i] == 'n' || str[i] == 'N') {
            isvalid_n = 1;
        } else if (str[i] == 'o' || str[i] == 'O') {
            isvalid_o = 1;
        } else if (str[i] == 'p' || str[i] == 'P') {
            isvalid_p = 1;
        } else if (str[i] == 'q' || str[i] == 'Q') {
            isvalid_q = 1;
        } else if (str[i] == 'r' || str[i] == 'R') {
            isvalid_r = 1;
        } else if (str[i] == 's' || str[i] == 'S') {
            isvalid_s = 1;
        } else if (str[i] == 't' || str[i] == 'T') {
            isvalid_T = 1;
        } else if (str[i] == 'u' || str[i] == 'U') {
            isvalid_u = 1;
        } else if (str[i] == 'v' || str[i] == 'V') {
            isvalid_v = 1;
        } else if (str[i] == 'w' || str[i] == 'W') {
            isvalid_w = 1;
        } else if (str[i] == 'x' || str[i] == 'X') {
            isvalid_x = 1;
        } else if (str[i] == 'y' || str[i] == 'Y') {
            isvalid_y = 1;
        } else if (str[i] == 'z' || str[i] == 'Z') {
            isvalid_z = 1;
        }
    }

    if (isvalid_a && isvalid_b && isvalid_c && isvalid_d && isvalid_e &&
        isvalid_f && isvalid_g && isvalid_h && isvalid_i && isvalid_j &&
        isvalid_k && isvalid_l && isvalid_m && isvalid_n && isvalid_o &&
        isvalid_p && isvalid_q && isvalid_r && isvalid_s && isvalid_T &&
        isvalid_u && isvalid_v && isvalid_w && isvalid_x && isvalid_y &&
        isvalid_z) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}