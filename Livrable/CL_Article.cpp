#include "CL_Article.h"

namespace NS_Composants {

	CL_Article::CL_Article() {
		this->Nom_article = "rien";
		this->Nature_de_l_article = "rien";
		this->Couleur_de_l_article = "rien";
		this->Quantite = 0;
		this->Prix_HT = " ";
		this->Seuil_de_reapprovisionnement = 0;
		this->Taux_TVA = " ";
	}
	void CL_Article::setNomArticle(String^ nom) {
		if (nom != "") {}
		this->Nom_article = nom;
	}

	String^ CL_Article::getNomArticle() {
		return this->Nom_article;
	}

	void CL_Article::setNatureArticle(String^ nature) {
		if (nature != "") {
			this->Nature_de_l_article = nature;
		}
	}
	String^ CL_Article::getNatureArticle() {
		return this->Nature_de_l_article;
	}

	void CL_Article::setCouleurArticle(String^ couleur) {
		if (couleur != "") {
			this->Couleur_de_l_article = couleur;
		}
	}

	String^ CL_Article::getCouleurArticle() {
		return this->Couleur_de_l_article;
	}

	void CL_Article::setQuantite(int qte) {
		if (qte > 0) {
			this->Quantite = qte;
		}
	}
	int CL_Article::getQuantite() {
		return this->Quantite;
	}
	void CL_Article::setPrixHT(String^ prix) {
		if (prix != "") {
			this->Prix_HT = prix;
		}
	}
	String^ CL_Article::getPrixHT() {
		return this->Prix_HT;
	}
	void CL_Article::setSeuilRea(int seuil) {
		if (seuil > 0) {
			this->Seuil_de_reapprovisionnement = seuil;
		}
	}
	int CL_Article::getSeuilRea() {
		return this->Seuil_de_reapprovisionnement;
	}
	void CL_Article::setTauxTVA(String^ taux) {
		if (taux != "") {
			this->Taux_TVA = taux;
		}
	}
	String^ CL_Article::getTauxTVA() {
		return this->Taux_TVA;
	}

	void CL_Article::set_ID(int id) {
		if (id > 0) {
			this->id_article = id;
		}
	}
	int CL_Article::get_ID() {
		return this->id_article;
	}

	String^ CL_Article::INSERT() {
		return "INSERT INTO ARTICLE " + "(Nom_article, Nature_de_l_article, Couleur_de_l_article, Quantite, Prix_HT, Seuil_de_reapprovisionement, Taux_TVA)"
			"VALUES ('" + this->getNomArticle() + "','" + this->getNatureArticle() + "','" + this->getCouleurArticle() + "','" +
			this->getQuantite() + "','" + this->getPrixHT() + "','" + this->getSeuilRea() + "','" + this->getTauxTVA() + "');";
	}
	String^ CL_Article::UPDATE() {
		return "UPDATE Article " +
			"SET Nom_article ='" + this->getNomArticle() + "', Nature_de_l_article = '" + this->getNatureArticle() + "', Couleur_de_l_article ='" + this->getCouleurArticle() +
			"', Quantite ='" + this->getQuantite() + "', Prix_HT = '" + this->getPrixHT() + "', Seuil_de_reapprovisionement ='" + this->getSeuilRea() + "', Taux_TVA ='"
			+ this->getTauxTVA() +"' WHERE(ID_article = " + this->get_ID() + ");";

	}
	String^ CL_Article::DELETE() {
		return "DELETE FROM Article " + "WHERE(ID_article = " + this->get_ID() + ");";

	}
	String^ CL_Article::SELECT() {
		return "SELECT ID_article, Nom_article, Nature_de_l_article, Couleur_de_l_article, Quantite, Prix_HT, Seuil_de_reapprovisionement, Taux_TVA"
			+ " FROM Article;";
	}
}