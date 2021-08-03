#ifndef SCORE_H
#define SCORE_H

#include <iostream>
#include <string>
#include <vector>

class Score {
 public:
  Score(std::string palyer_name_);
  void SaveScore(int score, int size);

 private:
  int ID {0};
  std::string player_name;
  int size  {0};
  int score {0};

  const std::string score_file_name = "scores.txt";

  class TotalScore{
    public:
    int ID {0};
    std::string name;
    int size  {0};
    int score {0};
  };
  std::vector<TotalScore> total_score_vec {};
  TotalScore highest_score;

  void loadScore();
  static bool comparator(const TotalScore& s1, const TotalScore& s2);
  void FindHighestScore();

};



#endif