
long Acker(long m, long n) {
	if (m == 0) {
		return n + 1;
	} else if (m > 0 && n == 0) {
		return Acker(m - 1, 1);
	} else {
		return Acker(m - 1, Acker(m, n - 1));
	}
}