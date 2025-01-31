
void put_rec(int rec[6], FILE *fp) {
	int len;

	len = fwrite(rec, sizeof rec, 1, fp);
	if (len != 1) printf("erro de escrita");
}
