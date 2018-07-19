int vetor[] = {13,8,34,1,5,3,1,0,21,2};
int tamanho = sizeof(vetor)/sizeof(int);
float soma=0, media_=0, variancia_=0, desviopadrao_=0, somadosquadrados=0;

//==================================
void setup()
{

  Serial.begin(9600);

//======== average calculation ==========

  for (short i=0; i < tamanho; ++i)
  {
      soma += vetor[i];

  }

    media_= soma/tamanho;
    
//========= sum of squares =======

  for (short i=0; i < tamanho; ++i)
  {
      somadosquadrados += sq (vetor[i]-media_);

  }
  
//============= variance =============

    variancia_ = somadosquadrados / (tamanho-1);


//============= standard deviation =============

    desviopadrao_ = sqrt (variancia_);

  Serial.println(desviopadrao_);
}

//================================

void loop()
{}
