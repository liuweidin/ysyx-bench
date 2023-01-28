package One_cycle
import chisel3._
import chisel3.util._
object RVI_ALU extends paramete{
  def ADDI = BitPat("b????????????_?????_000_?????_0010011")
  def SLLI =BitPat("b000000??????_?????_001_?????_0010011")
  def AUIPC =  BitPat("b????????????_?????_???_?????_0010111")
  def LUI = BitPat("b????????????_?????_???_?????_0110111")
  def Ebreak = BitPat("b0000000_00001_00000_000_00000_1110011")

  val table =Array(
      ADDI -> List(InstrType.InstrI,FUType.alu,ALUOPType.add),
      SLLI -> List(InstrType.InstrI, FUType.alu, ALUOPType.sll),
      AUIPC -> List(InstrType.InstrU,FUType.alu,ALUOPType.add),
      LUI -> List(InstrType.InstrU,FUType.alu,ALUOPType.add),
      Ebreak -> List(InstrType.InstrN,FUType.alu,ALUOPType.ebreak),
  )
}


