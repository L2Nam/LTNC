string toLower (string s) {
	for (int i = 0; i < s.size(); i ++) {
		if (s[i] > 64 && s[i] < 91) s[i] += 32;
	}
	return s;
}