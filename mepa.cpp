int main(int argc, char const *argv[])
{
  
  return 0;
}


void INPP(vector<long long> &D, int &s)
{
  s = -1;
  D[0] = 0;
}

void CRCT(vector<long long> &M, int &s, int k)
{
  s += 1;
  M[s] = k;
}

void SOMA(vector<long long> &M, int &s)
{
  M[s - 1] = M[s - 1] + M[s];
  s -= 1;
}

void SUBT(vector<long long> &M, int &s)
{
  M[s - 1] = M[s - 1] - M[s];
  s -= 1;
}

void DIVI(vector<long long> &M, int &s)
{
  M[s - 1] = M[s - 1] / M[s];
  s -= 1;
}

void MULT(vector<long long> &M, int &s)
{
  M[s - 1] = M[s - 1] * M[s];
  s -= 1;
}

void INVR(vector<long long> &M, int &s)
{
  M[s] = M[s] * (-1);
}

void NEGA(vector<long long> &M, int &s)
{
  M[s] = 1 - M[s];
}

void CONJ(vector<long long> &M, int &s)
{
  if (M[s - 1] == 1 && M[s] == 1)
    M[s - 1] = 1;
  else
    M[s - 1] = 0;
  s -= 1;
}

void DISJ(vector<long long> &M, int &s)
{
  if (M[s - 1] == 1 || M[s] == 1)
    M[s - 1] = 1;
  else
    M[s - 1] = 0;
  s -= 1;
}

void CMME(vector<long long> &M, int &s)
{
  if (M[s - 1] < M[s])
    M[s - 1] = 1;
  else
    M[s - 1] = 0;
  s -= 1;
}

void CMMA(vector<long long> &M, int &s)
{
  if (M[s - 1] > M[s])
    M[s - 1] = 1;
  else
    M[s - 1] = 0;
  s -= 1;
}

void CMIG(vector<long long> &M, int &s)
{
  if (M[s - 1] == M[s])
    M[s - 1] = 1;
  else
    M[s - 1] = 0;
  s -= 1;
}

void CMDG(vector<long long> &M, int &s)
{
  if (M[s - 1] != M[s])
    M[s - 1] = 1;
  else
    M[s - 1] = 0;
  s -= 1;
}

void CMAG(vector<long long> &M, int &s)
{
  if (M[s - 1] >= M[s])
    M[s - 1] = 1;
  else
    M[s - 1] = 0;
  s -= 1;
}

void CMEG(vector<long long> &M, int &s)
{
  if (M[s - 1] <= M[s])
    M[s - 1] = 1;
  else
    M[s - 1] = 0;
  s -= 1;
}

void DSVF(vector<long long> &M, int &s, size_t &i, int p)
{
  if (M[s] == 0)
    i = p - 1;
  s -= 1;
}

void DSVS(vector<long long> &M, size_t &i, int p)
{
  i = p - 1;
}

void AMEM(vector<long long> &M, int &s, int n)
{
  s += n;
}

void DMEM(vector<long long> &M, int &s, int n)
{
  s -= n;
}

void CRVL(vector<long long> &M, vector<long long> &D, int &s, int m, int n)
{
  s += 1;
  M[s] = M[D[m] + n];
}

void ARMZ(vector<long long> &M, vector<long long> &D, int &s, int m, int n)
{
  M[D[m] + n] = M[s];
  s -= 1;
}

void IMPR(vector<long long> &M, int &s)
{
  cout << M[s] << endl;
  s -= 1;
}

void LEIT(vector<long long> &M, int &s)
{
  s += 1;
  int in;
  cin >> in;
  M[s] = in;
}

void ARMI(vector<long long> &M, vector<long long> &D, int &s, int m, int n)
{
  M[M[D[m] + n]] = M[s];
  s -= 1;
}

void CHPR(vector<long long> &M, vector<long long> &D, int &s, size_t &i, int p, int m)
{
  M[s + 1] = i;
  M[s + 2] = m;
  s += 2;
  i = p - 1;
}

void CREN(vector<long long> &M, vector<long long> &D, int &s, int m, int n)
{
  s += 1;
  M[s] = D[m] + n;
}

void ENPR(vector<long long> &M, vector<long long> &D, int &s, int k)
{
  s += 1;
  M[s] = D[k];
  D[k] = s + 1;
}

void ENRT(vector<long long> &D, int &s, int j, int n)
{
  s = D[j] + n - 1;
}

void RTPR(vector<long long> &M, vector<long long> &D, int &s, size_t &i, int k, int n)
{
  D[k] = M[s];
  i = M[s - 2];
  s -= (n + 3);
}
