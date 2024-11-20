#include "stmtVisitor.hpp"

using namespace cfp;
using namespace cfp::ast;
using namespace cfp::ast::stmt;

/*!
 * @param name variable
 * @param initializer value
 */
var::var(scan::token name, std::unique_ptr<expr::expression> &&initializer)
					   : name(std::move(name)), initializer(std::move(initializer)){
}

/*!
 * @param visitor visitor
 */
void var::accept(stmtVisitor &visitor) {
	visitor.visit(*this);
}