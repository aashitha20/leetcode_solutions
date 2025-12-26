int romanToInt(char* s) {
     int map[256] = {0};  // ASCII mapping for quick lookup
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    int total = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        // If current symbol < next symbol, subtract it
        if (i < n - 1 && map[(int)s[i]] < map[(int)s[i + 1]]) {
            total -= map[(int)s[i]];
        } else {
            total += map[(int)s[i]];
        }
    }
    return total;
    
}
