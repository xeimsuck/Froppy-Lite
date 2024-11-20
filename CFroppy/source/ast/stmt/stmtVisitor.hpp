#pragma once
#include "statement.hpp"
#include "expression.hpp"
#include "print.hpp"
#include "var.hpp"
#include "block.hpp"
#include "if_else.hpp"
#include "loop.hpp"
#include "break_loop.hpp"

namespace cfp::ast::stmt {
	/*!
	@brief realize visitor pattern for statements
	 */
	class stmtVisitor {
	public:
		virtual ~stmtVisitor() = default;

		void visit(statement& stmt);

		virtual void visit(expression& stmt) = 0;
		virtual void visit(print& stmt) = 0;
		virtual void visit(var& stmt) = 0;
		virtual void visit(block& stmt) = 0;
		virtual void visit(if_else& stmt) = 0;
		virtual void visit(loop& stmt) = 0;
		virtual void visit(break_loop& stmt) = 0;
	};
}