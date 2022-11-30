class Solution {
public:
    string c;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
      c=longUrl;
      return "http://tinyurl.com/kiran516";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return c;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));