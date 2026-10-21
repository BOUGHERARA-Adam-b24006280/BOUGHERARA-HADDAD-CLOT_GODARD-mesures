/*
 * Auteur : Adam BOUGHERARA
 * Date : 21/10/2026
 * Description : QuickSort simplifié.
 * Trie le tableau a de n cases dans l'ordre croissant.
 */
void iqsort0(int * a, int n) {
    int i, j;
    // un tableau de 0 ou 1 case est deja trié
    if (n <= 1)
        return;
    // a[0] sert de pivot
    // j = indice de la derniere case plus petite que le pivot
    for (i = 1, j = 0; i < n; i++)
        if (a[i] < a[0])
            swap(++j, i, a);
    // on met le pivot à sa place
    swap(0, j, a);
    // on trie la partie gauche puis la partie droite du pivot
    iqsort0(a, j);
    iqsort0(a + j + 1, n - j - 1);
}
