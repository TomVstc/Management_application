#include "CL_Statistique.h"

String^ NS_Composants::CL_Statistique::SELECT_PRODUIT_SEUIL()
{
    return "SELECT Nom_article FROM Article WHERE Quantite < Seuil_de_reapprovisionement;";
}
