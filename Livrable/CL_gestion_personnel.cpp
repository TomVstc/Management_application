#include "CL_gestion_personnel.h"

namespace NS_Svc
{
	CL_svc_gestionPersonnes::CL_svc_gestionPersonnes()
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personne = gcnew NS_Composants::CL_map_personne();  //Initialise les composants de classes définis dans CL_map_personne
		this->ds = gcnew Data::DataSet();
	}

	DataSet^ CL_svc_gestionPersonnes::listePersonnes(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = cad->getRows(this->personne->SELECT(), dataTableName);
		return this->ds;

	}
	void CL_svc_gestionPersonnes::ajouter(String^ nom, String^ prenom, String^ numero_rue, String^ nom_rue, String^ superieur, String^ ville, String^ cp, String^ date_embauche)
	{
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		this->personne->setNumero_rue(numero_rue);
		this->personne->setNom_rue(nom_rue);
		this->personne->setSuperieur(superieur);
		this->personne->setVille(ville);
		this->personne->setCp(cp);
		this->personne->setDate_embauche(date_embauche);
		this->cad->actionRowsID(personne->INSERT()); //Appel à la fonction acionrowsID ainsi que de la requete SQL INSERT 
	}

	void CL_svc_gestionPersonnes::supprimer(String^ id)
	{
		this->cad->actionRows("DELETE FROM Personnel WHERE (ID_personnel = " + id + ");");  //suppression sans passer par le mappage parce que il n'y a pas d'id au lieu de mettre delete, nous avons rentrer la commande SQL
	}

	void CL_svc_gestionPersonnes::modifier(String^ id, String^ nom, String^ prenom, String^ numero_rue, String^ nom_rue, String^ superieur, String^ ville, String^ cp, String^ date_embauche)
	{

		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		this->personne->setNumero_rue(numero_rue);
		this->personne->setNom_rue(nom_rue);
		this->personne->setSuperieur(superieur);
		this->personne->setVille(ville);
		this->personne->setCp(cp);
		this->personne->setDate_embauche(date_embauche);
		this->cad->actionRows("UPDATE Personnel SET " + "Nom = '" + this->personne->getNom() + "', Prenom = '" + this->personne->getPrenom() + "', N__rue = '" + this->personne->getNumero_rue() + "', Nom_de_rue = '" + this->personne->getNom_rue() + "', Date_d_embauche = '" + this->personne->getDate_embauche() + "', Superieur_hierarchique = '" + this->personne->getSuperieur() + "', Ville = '" + this->personne->getVille() + "', CP = '" + this->personne->getCp() + "' " + "WHERE(ID_personnel = " + id + ");");
	}

}