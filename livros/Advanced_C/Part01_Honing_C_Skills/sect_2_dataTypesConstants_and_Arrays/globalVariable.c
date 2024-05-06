long int ISum; // Using 'int' is optional
long int ICount;

void SumInt(int nItem) {
    ISum += (long) nItem;
    ++ICount;
}

void SubInt(int nItem) {
    ISum -= (long)nItem;
    --ICount;
}

int Average() {
    int nReturn = 0;
    nReturn = (int)(ISum / ICount);

    return (nReturn);
}