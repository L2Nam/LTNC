string pigLatin(string word){
	string s = "way";
	if (word[0] == 'u' || word[0] == 'e' || word[0] == 'o' || word[0] == 'a' || word[0] == 'i') {
		word.insert(word.begin() + word.size(), s.begin(), s.begin() + 3);
	}
	else {
		char a = word[0];
		for (int i = 1; i < word.size(); i ++) {
			word[i - 1] = word[i]; 
		}
		word[word.size() - 1] = a;
		word.insert(word.begin() + word.size(), s.begin() + 1, s.begin() + 3);
	}
	return word;
}
