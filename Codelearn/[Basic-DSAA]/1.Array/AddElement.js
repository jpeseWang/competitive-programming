function array(a, k, x) {
  const n = a.length;
  for (let i = n + 1; i > k; i--) {
    a[i] = a[i - 1];
  }
  a[k] = x;
  console.log(a.join(" "));
}
