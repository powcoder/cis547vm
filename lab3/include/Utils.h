https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <dirent.h>
#include <fstream>
#include <iostream>
#include <map>
#include <regex>
#include <set>
#include <streambuf>
#include <string>
#include <sys/stat.h>

extern int successCount;
extern int failureCount;

/**
 * @brief Initialize the Output Directory for fuzzer.
 *
 * @param OutDir Path to Output Directory.
 */
void initialize(std::string &OutDir);

/**
 * @brief Read the file at Path into a string.
 *
 * @param Path Path to a file.
 * @return std::string File contents.
 */
std::string readOneFile(std::string &Path);

/**
 * @brief Read Seed Inputs from a directory.
 *
 * @param SeedInputs Vector to store the seeds.
 * @param SeedInputDir Path to the seed directory.
 * @return int exit status.
 */
int readSeedInputs(std::vector<std::string> &SeedInputs,
                   std::string &SeedInputDir);

/**
 * @brief Read the coverage file generated by running Target
 *
 * @param Target name of target binary
 * @param CoverageData vector to store the coverage data.
 */
void readCoverageFile(std::string &Target,
                      std::vector<std::string> &CoverageData);

/**
 * @brief Save rondom number generator seed to OutDir/randomseed.txt
 *
 * @param OutDir Path to output directory.
 * @param randomSeed seed value.
 */
void storeSeed(std::string &OutDir, int randomSeed);

/**
 * @brief Store an input, know to not cause a crash.
 *
 * @param Input Input string.
 * @param OutDir Path to output directory.
 */
void storePassingInput(std::string &Input, std::string &OutDir);

/**
 * @brief Store an input, know to cause a crash.
 *
 * @param Input Input string.
 * @param OutDir Path to output directory.
 */
void storeCrashingInput(std::string &Input, std::string &OutDir);

/**
 * @brief Run the Target binary with Input on its stdin.
 *
 * @param Target path to target binary.
 * @param Input input to provide to the target.
 * @return int return code on running target.
 */
int runTarget(std::string &Target, std::string &Input);