#include "CL_gestion_article.h"

namespace NS_svc {

    CL_gestion_article::CL_gestion_article() {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->article = gcnew NS_Composants::CL_Article();
        this->ds = gcnew Data::DataSet();
    }

    DataSet^ CL_gestion_article::listearticle(String^ dataTabName) {
        this->ds->Clear();
        this->ds = this->cad->getRows(this->article->SELECT(), dataTabName);
        return this->ds;
    }
    int CL_gestion_article::ajouter(String^ nom, String^ nature, String^ couleur, int quantite, String^ prixHT, int seuil, String^ taux) {
        int id_article;
        this->article->setNomArticle(nom);
        this->article->setNatureArticle(nature);
        this->article->setCouleurArticle(couleur);
        this->article->setQuantite(quantite);
        this->article->setPrixHT(prixHT);
        this->article->setSeuilRea(seuil);
        this->article->setTauxTVA(taux);
        id_article = this->cad->actionRowsID(this->article->INSERT());
        return id_article;
    }
    void CL_gestion_article::modifier(String^ nom, String^ nature, String^ couleur, int quantite, String^ prixHT, int seuil, String^ taux, int id_article) {
        this->article->set_ID(id_article);
        this->article->setNomArticle(nom);
        this->article->setNatureArticle(nature);
        this->article->setCouleurArticle(couleur);
        this->article->setQuantite(quantite);
        this->article->setPrixHT(prixHT);
        this->article->setSeuilRea(seuil);
        this->article->setTauxTVA(taux);
        this->cad->actionRows(this->article->UPDATE());
    }
    void CL_gestion_article::supprimer(int id_article) {
        this->article->set_ID(id_article);
        this->cad->actionRows(this->article->DELETE());
    }
}