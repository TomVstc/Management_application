#pragma once
using namespace System;

namespace NS_Composants {
    ref class CL_Article
    {
    private:
        String^ Nom_article;
        String^ Nature_de_l_article;
        String^ Couleur_de_l_article;
        int Quantite;
        String^ Prix_HT;
        int Seuil_de_reapprovisionnement;
        String^ Taux_TVA;
        int id_article;

    public:
        void setNomArticle(String^);
        String^ getNomArticle();
        void setNatureArticle(String^);
        String^ getNatureArticle();
        void setCouleurArticle(String^);
        String^ getCouleurArticle();
        void setPrixHT(String^);
        String^ getPrixHT();
        void setQuantite(int);
        int getQuantite();
        void setTauxTVA(String^);
        String^ getTauxTVA();
        void setSeuilRea(int);
        int getSeuilRea();
        void set_ID(int);
        int get_ID();

        CL_Article();
        String^ INSERT();
        String^ UPDATE();
        String^ DELETE();
        String^ SELECT();

    };

}