#!/bin/bash

# Vérifie si un dossier est passé en argument, sinon utilise le dossier courant (.)
DOSSIER="${1:-.}"

# Vérifie que le dossier existe bien
if [ ! -d "$DOSSIER" ]; then
    echo "Erreur : Le dossier '$DOSSIER' n'existe pas."
    exit 1
fi

echo "Décompte des lignes de code (LOC) dans : $DOSSIER"
echo "------------------------------------------------"

# Recherche tous les fichiers
# et compte le nombre de lignes pour chacun ainsi que le total
find "$DOSSIER" -type f -not -path '*/.*' -exec wc -l {} +