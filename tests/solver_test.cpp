#include <gtest/gtest.h>
#include "../src/main.h"

// Initialization of the SolerClass
TEST(Solver, SolvingExpression) {
    
    SolverClass<AtomClass> solver;
    
    AtomBase atom = solver.solve("1.2 + 34");
    EXPECT_EQ(atom.value, (float)35.2);

    atom = solver.solve("32 - 34");
    EXPECT_EQ(atom.value, (float)-2);
    
    atom = solver.solve("32 * 2");
    EXPECT_EQ(atom.value, (float)64);
    
    atom = solver.solve("32.4 / 2");
    EXPECT_EQ(atom.value, (float)16.2);
    
    atom = solver.solve("3 ** 3");
    EXPECT_EQ(atom.value, (float)27);
    
    atom = solver.solve("1.2 + +68/2 - -2**5 * 93");
    EXPECT_EQ(atom.value, (float)3011.2);
}
