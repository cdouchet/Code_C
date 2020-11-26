int	my_factorielle_it(int nb)
{
  int	res;
  int	i;

  res = 1;
  i = 1;
  if (nb < 0 || nb > 12)
    return (0);
  while (nb > 0)
    {
      res = res * i;
      if (res < 0)
	return (0);
      nb = nb - 1;
      i = i + 1;
    }
  return (res);
}

int main()
{
    my_factorielle_it(0);
}