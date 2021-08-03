#include "score.h"
#include <fstream>
#include <sstream>
#include <algorithm>

  
Score::Score(std::string player_name_):player_name(player_name_) 
{
  loadScore();
}

void Score::SaveScore(int score, int size)
{
    this->score = score;
    this->size = size;
    std::fstream file;
    file.open(score_file_name, std::ifstream::app);
    if(file.is_open())
    {
        std::string myArray[5];
        file << this->ID << " "; 
        file << this->player_name << " ";
        file << this->size << " ";
        file << this->score << " \n";
        std::cout << "Score Saved\n";
    }
    else
    {
        std::cout << "Score canot be saved \n";
    }

    file.close();

    FindHighestScore();
}

void Score::FindHighestScore()
{
  if (this->score > highest_score.score)
  {
      std::cout << "Your score is : " << this->score << ", Previous Highest score was: " << highest_score.score << std::endl;
      std::cout << "\n\n\n-------------------------------------------- " << std::endl;
      std::cout << "-------------------------------------------- " << std::endl;
      std::cout << "Congartulations ... You got a new Record !!!" << std::endl;
      std::cout << "-------------------------------------------- " << std::endl;
      std::cout << "--------------------------------------------\n\n\n" << std::endl;
  } 
}

bool Score::comparator(const Score::TotalScore& s1, const Score::TotalScore& s2) 
{
  return s1.score < s2.score;
}

void Score::loadScore()
{
  std::string line;
  std::ifstream myfile (score_file_name);
  if (myfile.is_open())
  {
    total_score_vec.clear();
    int i=0;
    std::string line;
    while ( getline(myfile,line))
    {
      std::stringstream ss(line);
      TotalScore total_score = {};
      ss >> total_score.ID >> total_score.name >> total_score.size >> total_score.score;
      total_score_vec.push_back(total_score);
      i++;
    }
    std::cout <<"Successfully read " << i << " saved scores" << std::endl;
    this->ID = total_score_vec.back().ID +1;
    myfile.close();

    highest_score = *std::max_element(this->total_score_vec.begin(), this->total_score_vec.end(), comparator);
  }
  else 
  {
    std::cout << "Unable to load previous scores";
  }
}
