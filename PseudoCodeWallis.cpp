
1 : Demander la saisie de l'utilisateur
  1.1 Demander la saisie du numérateur
  1.2 Demander la saisie du dénominateur
2: Vérifier la saisie
  2.1. : Vérifier que le denominateur est différent de 0
    2.1.1 : Si oui
              continue le programme
    2.1.2 : Si non
              on arrête le programme et on affiche un message "Veuillez saisir un denominateur différent de 0"
  2.2: Vérifier que la différence entre numerateur et denominateur = |1|
    2.2.1 : Si oui
              on continue le programme
    2.2.2 : Si non
              on affiche un message d'erreur à l'utilisateur "Votre nombre ne correspond pas un un nombre de la suite de Wallis"
3 : Calculer la suite de Whalis
  3.1 Initialisation du premier terme avec a =2 (numérateur) et b =1 (dénominateur)
  3.2 Boucle tant que a <= numérateur saisi par l'utilisateur et que b <= denominateur saisi par l'utilisateur
          3.2.1 si a > b 
          On incrément 2 à b
        3.2.2 si b > a 
          On incrément 2 à a
       3.3 Calcul de la valeur 
  3.3.1 Si a est différent de 2 et b est différent de 3
    3.3.2 Calcul de le suite de Wallis
     v_numerateur = v_numerateur *a
    v_denominateur = v_denominateur *b
  3.3.2 Si a égal à 2 et b égal à 1
      v_numerateur = 2*a
      v_denominateur = 3*b
4 : Afficher le résultat
4.1 Calcul du résultat 
